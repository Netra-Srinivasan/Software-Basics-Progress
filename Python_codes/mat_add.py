mat1 = [[1,2,3], [4,5,6], [7,8,9]]
mat2 = [[2,3,4], [5,6,7], [8,9,0]]

if len(mat1)!=len(mat2) or len(mat1[0])!=len(mat2[0]):
    print("different sizes of matrices")
    quit()

res = []

for i in range(len(mat1)):
    row = []
    for j in range(len(mat1[0])):
        row.append(mat1[i][j]+mat2[i][j])
    res.append(row)
print(res)
