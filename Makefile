  # the compiler: gcc for C program, define as g++ for C++
  CC = gcc 

  # compiler flags:
  #  -g    adds debugging information to the executable file
  #  -Wall turns on most, but not all, compiler warnings
  CFLAGS  = -g -Wall

  # the build target executable:

	#TARGET = set_bits_in_array
	#TARGET = reverse_bit
	#TARGET = duplicates_of_array
	#TARGET = SNOB
	#TARGET = parity_lookuptable
	#TARGET = m_into_n
  #TARGET = swap_bits_in_a_number
  #TARGET = find_Endianness
  #TARGET = compute_integer_obsolute_value
  #TARGET = find_non_repeating_elements
  #TARGET = Reverse_bits
  #TARGET = find_bit_parity
  #TARGET = swap_even_odd_bits
  #TARGET = is_bit_pattern_palindrome
  #TARGET = isSparse
  #TARGET = XOR_without_using_operator
  #TARGET = toggle_bits
  #TARGET = addition_logic
  #TARGET = extract_bits
  #TARGET = find_even_occuring_elements
  #TARGET = rotate_bits
  #TARGET = change_endianness
  #TARGET = convert_AtoB
  #TARGET = find_duplicates
  # TARGET = is_power_of_2

  # TARGET =  compute_min_max

    TARGET = count_set_bits_benchmarking

  all: $(TARGET).c
	      $(CC) $(CFLAGS) -o exe $(TARGET).c

  clean:
	    $(RM) exe
