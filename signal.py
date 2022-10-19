import numpy as np
import scipy.signal as signal
import matplotlib.pyplot as plt

# n = np.array( [ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ] )
n = np.arange(20)
# 輸入訊號，後面補上幾個 0
x = np.array( [ 1, 2, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ] )

# 轉換函式
b = np.array( [ 0.5, 0.5 ] )
a = np.array( [ 1, -0.8 ] )
y = signal.lfilter( b, a, x )

print( "x =", x )
print( "y =", y )

# plt.figure( 1 )
plt.subplot(121)
plt.stem( n, x, use_line_collection=True)
plt.xlabel( 'n' )
plt.ylabel( 'x[n]' )

plt.subplot(122)
plt.stem( n, y, use_line_collection=True )
plt.xlabel( 'n' )
plt.ylabel( 'y[n]' )

plt.show( )