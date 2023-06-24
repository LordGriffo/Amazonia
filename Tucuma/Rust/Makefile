all: check test bench doc build release run 

check:
	@cargo check

test:
	@cargo test
	
bench:
	@cargo bench

doc:
	@cargo doc

build:
	@cargo build

release:
	@cargo build --release

run:
	@echo "Running cargo run in Rust..."
	@cargo run

.PHONY: all build release run
