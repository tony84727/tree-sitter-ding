module.exports = grammar({
    name: 'ding',
    extras: $ => [
        ' ',
    ],
    rules: {
	source_file: $ => seq(
	    field('description', seq(
                $.something,
                repeat(
                    seq(
                        $._newline,
                        $.something
                    )
                )
            )),
            $._newline,
	    /-+/,
            $._newline,
	    $.order_list,
	),
	order_list: $ => seq(
            $.order,
            repeat(
                seq(
                    $._newline,
                    $.order
                ),
            ),
        ),
	order: $ => seq(
	    field('price', $.price),
	    field('product', $.text),
	    field('total_quantity', $.quantity),
	    field('buyers', $.buyer_list),
	),
	buyer_list: $ => seq(
	    '(',
	    $.buyer_and_quantity,
	    repeat(
		seq(
		    $._sep,
		    $.buyer_and_quantity,
		)
	    ),
	    ')',
	),
	buyer_and_quantity: $ => seq(
	    field('buyer_name', $.text),
	    optional(field('quantity', $.quantity)),
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
        text: $ => /[^*()]+/,
        _newline: $ => '\n',
        _sep: $ => choice(
            ',',
            '、',
        ),
    },
})
// vim: sw=4 expandtab
