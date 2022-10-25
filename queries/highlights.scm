(quantity
  "*" @operator
  (number) @number)
(order
      price: (price
	       "$" @operator
	       (number) @number) 
      product: (text) @function
      buyers: (buyer_list
		(buyer_and_quantity
		  buyer_name: (text) @type)))
(source_file
  description: (_)* @string)
