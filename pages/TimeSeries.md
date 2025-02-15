- Different Time series
  collapsed:: true
	- Univariate
	  collapsed:: true
		- Multi - step
		- Multi - output
		- Multi - series (uncorrelated but modeled alike)
	- Multi-Variate
- Analytics
  collapsed:: true
	- Descriptive Analytics
	- Data ETL
	  collapsed:: true
		- Properties / assumed/ necessary before forecasting
		  collapsed:: true
			- removing trends
			- removing seasonality
			- removing other patterns such that the statistical properties of a series remain almost constant throughout the time interval/steps (i.e. making the series stationary)
	- Predictive Analytics
- Modeling
- Evaluation
  collapsed:: true
	- Backtest | Hindcasting
	  id:: 65410d0d-6e64-4d45-b06b-41182bf3b9dc
	  collapsed:: true
		- The evaluation of model on historically sorted data is termed
		- Types
		  collapsed:: true
			- Backtesting without refit
			- with refit and increased train window size (fixed origin)
			- with refit and fixed train size (rolling origin)
			- with intermittent refit
			- including gap