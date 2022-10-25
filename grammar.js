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
	    field('price', $.price),
	    field('product', $._product_name),
	    field('total_quanltity', $.quantity),
	    field('buyers', $.buyer_list),
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
	    field('buyer_name', $.buyer_name),
	    field('quantity', $.quantity),
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
        buyer_name: $ => /[^*]+/,
	_product_name: $ => /[^*]+/,
    },
})
// vim: sw=4 expandtab
