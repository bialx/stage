import sys
degree = ZZ(sys.argv[1])
nbr_test = ZZ(sys.argv[2])



def generator_exemple_square(size):
    K = GF(2)
    R.<x> = PolynomialRing(K)
    P = R.random_element(size)
    # print P
    P_coeffs = P.coefficients(sparse=False)
    # print P_coeffs
    """ Generate input"""
    tmp, i = [], 0
    while (i+1)*64 < size + 1:
        tmp.append(P_coeffs[i*64:(i+1)*64])
        i += 1
    tmp.append((P_coeffs[i*64:(i+1)*64]))
    data = [ZZ(x,2) for x in tmp][::-1]
    # print "input is: " , data
    input = data

    """ Generate Output"""
    Q = P^2
    Q_coeffs = Q.coefficients(sparse=False)
    tmp, i = [], 0
    while (i+1)*64 < 2*size + 1:
        tmp.append(Q_coeffs[i*64:(i+1)*64])
        i += 1
    tmp.append((Q_coeffs[i*64:(i+1)*64]))
    data = [ZZ(x,2) for x in tmp][::-1]
    # print "output is: " , data
    output = data
    return input, output

def generator_exemple_square_root(size):
    K = GF(2)
    R.<x> = PolynomialRing(K)
    P = R.random_element(size)
    # print P
    P_coeffs = P.coefficients(sparse=False)
    """ Generate Input"""
    tmp, i = [], 0
    while (i+1)*64 < size + 1:
        tmp.append(P_coeffs[i*64:(i+1)*64])
        i += 1
    tmp.append((P_coeffs[i*64:(i+1)*64]))
    data = [ZZ(x,2) for x in tmp]
    # print "input is: " , data
    input = data

    """ Generate Output"""
    l_even = [pos for pos, elt in enumerate(P_coeffs) if (pos%2 == 0 and elt ==1)]
    l_odd = [pos for pos, elt in enumerate(P_coeffs) if (pos%2 != 0 and elt ==1)]
    sqrt_even, sqrt_odd = list(map(lambda x: x/2, l_even)), list(map(lambda x: (x-1)/2, l_odd))
    output1, output2 = sum([2^(pos) for pos in sqrt_even]), sum([2^(pos) for pos in sqrt_odd])
    # print "output is : ", [output1, output2]
    output =  list((output1, output2))
    return input, output


def generate_random_file(nbr_test, size):
    print("\n\* Input- Output for squaring */")

    with open("squaring.txt", "a") as f:
        for i in range(nbr_test):
            obj = generator_exemple_square(size)
            for i,elt in enumerate(obj):
                if i == 0:
                    f.write("?")
                elif i == 1:
                    f.write("!")
                f.write(str(len(elt)))
                f.write("\n")
                for data in elt:
                    f.write(str(data))
                    f.write("\n")
                if i==1:
                    f.write("-\n")

    print("\n\* Input- Output for square root */")
    with open("square_root.txt", "a") as f:
        for i in range(nbr_test):
            obj = generator_exemple_square_root(size)
            for i,elt in enumerate(obj):
                if i == 0:
                    f.write("?")
                elif i == 1:
                    f.write("!")
                f.write(str(len(elt)))
                f.write("\n")
                for data in elt:
                    f.write(str(data))
                    f.write("\n")
                if i==1:
                    f.write("-\n")

generate_random_file(nbr_test, degree)
