# Create a class RELATION, use Matrix notation to represent a relation. Include
# member functions to check if the relation is Reflexive, Symmetric, Anti-symmetric,
# Transitive.Using these functions check whether the given relation is: Equivalence
# or Partial Order relation or None


class Relation:

    def __init__(self,size):
        self.size = size
        self.matrix = [[0 for _ in range(size)] for _ in range(size)]
        
    def inp_matrix(self):
        for i in range(self.size):
            self.matrix[i] = list(map(int,input(f"Row {i+1} :").split()))
        
    def disp_matrix(self):
        print("Relation matrix :\n")
        for row in self.matrix:
            print(" ".join(map(str,row))) 

    def is_reflexive(self):
        for i in range (self.size):
            if self.matrix[i][i] != 1:
                return False
        return True
    
    def is_symmetric(self):
        for i in range (self.size):
            for j in range (self.size):
                if i != j and self.matrix[i][j] != self.matrix[j][i]:
                    return False
        return True
    
    def is_antisymmetric(self):
        for i in range (self.size):
            for j in range (self.size):
                if i != j and self.matrix[i][j] == 1 and  self.matrix[j][i] == 1:
                    return False
        return True
    
    def is_transitive(self):
        for i in range (self.size):
            for j in range (self.size):
                if self.matrix[i][j] == 1:
                    for k in range (self.size):
                        if self.matrix[j][k] == 1 and self.matrix[i][k] != 1:
                            return False
        return True
    
    def relation_type(self):
        Reflexive = self.is_reflexive()
        Symmetric = self.is_symmetric()
        AntiSymmetric = self.is_antisymmetric()
        Transitive = self.is_transitive()

        print("\nProperties of the relation:")
        print(f"Reflexive      : {'Yes' if Reflexive else 'No'}")
        print(f"Symmetric      : {'Yes' if Symmetric else 'No'}")
        print(f"Anti-Symmetric : {'Yes' if AntiSymmetric else 'No'}")
        print(f"Transitive     : {'Yes' if Transitive else 'No'}")

        if Reflexive and Symmetric and Transitive:
            print("\n=> This is an Equivalence Relation.")
        elif Reflexive and AntiSymmetric and Transitive:
            print("\n=> This is a Partial Order Relation.")
        else:
            print("\n=> This relation is neither an Equivalence nor a Partial Order.")

def main():
    n = int(input("Enter the size of matrix : "))
    rel = Relation(n)
    rel.inp_matrix()
    rel.disp_matrix()
    rel.relation_type()

if __name__ == "__main__":
    main()