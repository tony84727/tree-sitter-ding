module.exports = grammar({
    name: 'ding',
    rules: {
	source_file: $ => seq(
	    field('description', repeat($.something)),
	    /-+/,
	    $.order_list,
	),
	order_list: $ => repeat1($.order),
	order: $ => seq(
	    $.price,
	    field('product', $._product_name),
	    field('total_quanltity', $.quantity),
	    $.buyer_list,
	),
	buyer_list: $ => seq(
	    '(',
	    $.buyer_and_quantity,
	    repeat(
		seq(
		    ',',
		    $.buyer_and_quantity,
		)
	    ),
	    ')',
	),
	buyer_and_quantity: $ => seq(
	    $.something,
	    optional($.quantity),
	),
	price: $ => seq(
	    '$',
	    $.number,
	),
	quantity: $ => seq(
	    '*',
	    $.number,
	),
	something: $ => /.+/,
	number: $ => /\d+/,
	_product_name: $ => /[^*]+/,
    },
})
// vim: sw=4 expandtab
