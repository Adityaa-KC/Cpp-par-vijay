# Write a Program to check if a given graph is a complete graph. Represent the
# graph using the Adjacency Matrix representation.

def is_complete_graph(adj_matrix):
    n = len(adj_matrix)  # Number of vertices

    for i in range(n):
        for j in range(n):
            if i == j:
                if adj_matrix[i][j] != 0:
                    return False  # No self-loops allowed
            else:
                if adj_matrix[i][j] != 1:
                    return False  # Must be connected to all other vertices
    return True

# Example Input: Adjacency Matrix for a complete graph of 4 nodes
adj_matrix = [
    [0, 1, 1, 1],
    [1, 0, 1, 1],
    [1, 1, 0, 1],
    [1, 1, 1, 0]
]

if is_complete_graph(adj_matrix):
    print("The graph is a Complete Graph.")
else:
    print("The graph is NOT a Complete Graph.")
