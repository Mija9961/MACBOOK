//Draw a house using swift
var i = 1
var j = 1
var k = 1
var n = 13
while i <= n {
  j = 1
  k = 1
  while k <= n - i {
      print(" ", terminator: "")
      k += 1
    }
  while j <= n {
    if j <= i {
      print("*", terminator: " ")
    }
    j += 1
  }
  print("")
  i += 1
}
i = 1
j = 1
n = 11
while i <= n-3{
  j = 1
  while j <= n-2{
    print("*", terminator: "  ")
    j += 1
  }
  print("")
  i += 1
}
i = 1
j = 1
n = 6
var l = 1
while i <= n{
  j = 1
  k = 1
  while k <= i+l{
    print(" ", terminator: " ")
    k += 1
  }
  while j <= n-i*2+2{
    print("__", terminator: "_")
    j += 1
  }
  print("")
  i += 1
  l += 1
}
