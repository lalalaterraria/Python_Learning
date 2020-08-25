from ctypes import *
import time

lib = CDLL("./tmp.so")
lib.hello()

lib.int_add.argtypes = (c_int, c_int)
lib.int_add.restypes = c_int
print("Py:", lib.int_add(1,1))

d = [1] * 10
lib.double_sum.restype = c_double
print("Py:", lib.double_sum((c_double * 10)(*d), 10))

lib.str_ascii.restype = c_char_p
print("Py:", lib.str_ascii(b"hello"))

lib.str_utf8.restype = c_wchar_p
print("Py:", lib.str_utf8("hello"))