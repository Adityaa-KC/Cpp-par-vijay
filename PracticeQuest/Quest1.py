# 1. Create a class SET.Create member functions to perform the following SET operations:
#   1) is member:check whether an element belongs to the set or not and return value as true/false.
#   2) powerset: list all the elements of the powerset of a set.
#   3) subset:Check whether one set is a subset of the other or not.
#   4) union and Intersection of two Sets.
#   5) complement: Assume Universal Set as per the input elements from the user.
#   6) set Difference and Symmetric Difference between two sets.
#   7) cartesian Product of Sets.

class SET:
    def is_member(self,n,set1):
        return n in set1
    
    def powerSet(self,set1):
        if not set1:
            return [[]]
        
        first = set1[0]
        rest = set1[1:]

        set_without_first = self.powerSet(rest)
        set_with_first = []

        for set in set_without_first:
            set_with_first.append([first] + set)
        
        return set_without_first + set_with_first
        
    def is_subset(self,set1,set2):
        return set1.issubset(set2)
        
    def union_of_set(self,set1,set2):
        return set1.union(set2)
    
    def intersection_of_set(self,set1,set2):
        return set1.intersection(set2)
    
    def complement_set(self,set1,set2):
        return set1.difference(set2)
    
    def difference_of_set(self,set1,set2):
        return set1.difference(set2)
    
    def symmetric_difference(self,set1,set2):
        return set1.symmetric_difference(set2) 
    
    def cartesian_product(self,set1,set2):
        from itertools import product 
        cp = product(set1,set2)
        return list(cp)
    
def main():
    s1 = SET()
    set0 = {1,2,3,4,6,4,3,4}
    set1 = {1,2,3,4,5}
    set2 = list(set0)
    if(s1.is_member(1,set1)):
        print("Yes it is present")
    # result = s1.powerSet(set2)
    # print(result)
    # s1.is_subset(set1,set0)
    # result = s1.union_of_set(set0,set1)
    # print(result)
    # result = s1.intersection_of_set(set0,set1)
    # print(result)
    # result = s1.complement_set(set0,set1)
    # print(result)
    # result = s1.symmetric_difference(set0,set1)
    # print(result)
    # result = s1.cartesian_product(set0,set1)
    # print(result)
        
if __name__ == "__main__":
    main()