-
-
-
- Up and Running
  collapsed:: true
	- Install : `curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh`
	- Installer and Version management : `Rustup`
		- update : `rustup update`
		- uninstall : `rustup self uninstall`
	- Build and Package (`crate`) Management : `Cargo`
		- `cargo [--version | build | run | test | doc | publish]`
		- Create
			- `cargo new <project_name>`
				- ```
				  project_name
				  	| src/
				      	| main.rs
				       | Cargo.toml <---- rust manifest file
				  ```
		- Dependencies
			- `cargo add <dependency@version>`
			  Or,
			  ```
			  # (+) to Cargo.toml
			  [dependencies]
			  <dependency="version">
			  ```
			- `cargo build` to install dependency
			- `use dependency:: module` and add to `file.rs`
		- Build and Run :
			- `cargo check` : w/o producing binary
			- `cargo run`: build and run
			- `cargo build --release`: compile with optimization
			  id:: 642c0ca4-7df7-4fac-8b51-3f410eebbfe7
- Fundamentals
  collapsed:: true
	- `std::io`
	- ...
- Resources
  collapsed:: true
	- [Rust-lang-Book](https://doc.rust-lang.org/stable/book/)