# Write a Program to accept adirected graph G and computethe in-degree and out
# degree of each vertex.

def compute_degrees(adj_list):
    n = len(adj_list)
    in_degree = {v: 0 for v in adj_list}
    out_degree = {v: len(adj_list[v]) for v in adj_list}

    for u in adj_list:
        for v in adj_list[u]:
            in_degree[v] += 1

    # Display degrees
    print("Vertex\tIn-Degree\tOut-Degree")
    for v in adj_list:
        print(f"{v}\t{in_degree[v]}\t\t{out_degree[v]}")

# Example: Directed Graph (Adjacency List)
graph = {
    0: [1, 2],
    1: [2],
    2: [0],
    3: [2]
}

compute_degrees(graph)
