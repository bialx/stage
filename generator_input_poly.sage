
def generator_exemple(size):
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


generator_exemple(97)
