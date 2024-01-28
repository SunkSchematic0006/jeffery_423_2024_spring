package main
type Vertex struct {x, y float64}
func main() {
	var m map[string]Vertex
	m["Bell Labs"] = Vertex{ 40.68433, -74.39967 }
	m["Google"] = Vertex{37.42202, -122.08408 }
}

