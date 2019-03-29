
def generator_exemple_square(size):
    K = GF(2)
    R.<x> = PolynomialRing(K)
    P = R.random_element(size)
    P_coeffs = P.coefficients(sparse=False)

    """ Generate input"""
    tmp, i = [], 0
    while (i+1)*64 < size + 1:
        tmp.append(P_coeffs[i*64:(i+1)*64])
        i += 1
    tmp.append((P_coeffs[i*64:(i+1)*64]))
    data = [ZZ(x,2) for x in tmp][::-1]
    print "input is: " , data

    """ Generate Output"""
    Q = P^2
    Q_coeffs = Q.coefficients(sparse=False)
    tmp, i = [], 0
    while (i+1)*64 < 2*size + 1:
        tmp.append(Q_coeffs[i*64:(i+1)*64])
        i += 1
    tmp.append((Q_coeffs[i*64:(i+1)*64]))
    data = [ZZ(x,2) for x in tmp][::-1]
    print "output is: " , data

def generator_exemple_square_root(size):
    K = GF(2)
    R.<x> = PolynomialRing(K)
    P = R.random_element(size)
    P_coeffs = P.coefficients(sparse=False)
    """ Generate Input"""
    tmp, i = [], 0
    while (i+1)*64 < size + 1:
        tmp.append(P_coeffs[i*64:(i+1)*64])
        i += 1
    tmp.append((P_coeffs[i*64:(i+1)*64]))
    data = [ZZ(x,2) for x in tmp][::-1]
    print "input is: " , data

    """ Generate Output"""
    l_even = [pos for pos, elt in enumerate(P_coeffs) if (pos%2 == 0 and elt ==1)]
    l_odd = [pos for pos, elt in enumerate(P_coeffs) if (pos%2 != 0 and elt ==1)]
    sqrt_even, sqrt_odd = list(map(lambda x: x/2, l_even)), list(map(lambda x: (x-1)/2, l_odd))
    output1, output2 = sum([2^(pos) for pos in sqrt_even]), sum([2^(pos) for pos in sqrt_odd])
    print "output is : ", output1, output2

generator_exemple_square(113)
generator_exemple_square_root(80)
