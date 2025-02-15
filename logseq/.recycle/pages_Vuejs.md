- mark
	- docs [@](https://vuejs.org/guide)
	- cdn
		- global build of Vue, all top level api exposed as properties on the global `Vue` object
			- ```
			  <script src="https://unpkg.com/vue@3/dist/vue.global.js"></script>
			  
			  <div id="app">{{ message }}</div>
			  
			  <script>
			    const { createApp, ref } = Vue
			  
			    createApp({
			      setup() {
			        const message = ref('Hello vue!')
			        return {
			          message
			        }
			      }
			    }).mount('#app')
			  </script>
			  ```
		-
	-