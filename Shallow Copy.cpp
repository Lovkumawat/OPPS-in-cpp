//  Shallow Copy
// A shallow copy creates a new object, but does not copy nested objects (like lists inside lists, or objects inside objects).
// Instead, it copies references to those nested objects.

// 🧠 Think of it like:
// "Copy the outer structure, but point to the same inner objects."

// 🔸 Example (in Python):
// python
// Copy
// Edit
// import copy

original = [[1, 2], [3, 4]]
shallow = copy.copy(original)

shallow[0][0] = 99
print(original)  # Output: [[99, 2], [3, 4]] — original is affected
