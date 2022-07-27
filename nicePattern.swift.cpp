// import Foundation

//Drawing a triangle using *

for i in 1...5 {
  for j in 1...5 {
    if i == j || j == 1 || j == 5 {
      print("*", separator: " ", terminator: " ")
    } else {
      print(" ", separator: " ", terminator: " ")
    }
  }
  print("")
}

print("")
for _ in 1...5 {
  print("*")
}
print("")
for m in 1...5 {
  for n in 1...5 {
    if n == 1 || m == 1 || m == 5 {
      print("*", separator: " ", terminator: " ")
    } else {
      print(" ", separator: " ", terminator: " ")
    }
  }
  print("")
}
print("")
for m in 1...5 {
  for n in 1...5 {
    if n == 1 || m == 1 || m == 5 || m == 3 {
      print("*", separator: " ", terminator: " ")
    } else {
      print(" ", separator: " ", terminator: " ")
    }
  }
  print("")
}

