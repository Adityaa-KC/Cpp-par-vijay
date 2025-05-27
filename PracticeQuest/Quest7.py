# Write a Program to check if agiven graph is a complete graph. Represent the
# graph using the Adjacency List representation.

def is_complete_graph(adj_list):
    n = len(adj_list)  # Number of vertices

    for vertex in adj_list:
        # Check if the number of neighbors is n - 1
        if len(adj_list[vertex]) != n - 1:
            return False

        # Ensure no self-loops
        if vertex in adj_list[vertex]:
            return False

    return True

# Example 1: Complete graph with 4 vertices
adj_list_1 = {
    0: [1, 2, 3],
    1: [0, 2, 3],
    2: [0, 1, 3],
    3: [0, 1, 2]
}

# Example 2: NOT a complete graph
adj_list_2 = {
    0: [1, 2],
    1: [0, 2],
    2: [0, 1],
    3: [1]  # Node 3 is not connected to all others
}

print("Example 1:", "Complete Graph" if is_complete_graph(adj_list_1) else "Not a Complete Graph")
print("Example 2:", "Complete Graph" if is_complete_graph(adj_list_2) else "Not a Complete Graph")
