<?hh //strict

function add_two_numbers(int $num_1, int $num_2) : int {
  return $num_1 + $num_2;
}

<<__EntryPoint>>
function main(): noreturn {
  $sum = add_two_numbers(5, 4);
  print($sum);
  print("\n");
  print("Hello, world!\n");
  exit(0);
}
