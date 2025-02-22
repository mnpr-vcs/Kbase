- Types
  collapsed:: true
	- Inline
	  collapsed:: true
		- `<p style="color: blue; font-size: 16px;">sth</p`
	- Internal
	  collapsed:: true
		- ```
		  <head>
		    <style>
		      p { color: green; font-size: 18px; }
		    </style>
		  </head>
		  ```
	- External
	  collapsed:: true
		- ```
		  <head>
		    <link rel="stylesheet" href="styles.css">
		  </head>
		  ```
- Syntax
  collapsed:: true
	- a **selector** which specifies the HTML element(s) to style.
	- a **declaration block** which contains one or more declarations separated by semicolons.
	- ```
	  selector {
	      property: value;
	  }
	  ```
- Selectors
  collapsed:: true
	- Universal (`*`)
	- Element `p { color:blue }`
	- Class `.className { color:blue }`
	- ID `#idName { color:blue }`
	- Attribute `a[href] { color:blue }`
	- Grouping and Nesting
		- Grouping `div, p { color:blue }`
		- Nesting `div p { color:blue }`
- Ref
  collapsed:: true
	- https://www.tutorialspoint.com/css/css_syntax.htm