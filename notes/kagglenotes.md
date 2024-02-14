# Organising data 
## Missing values
Drop columns: drop column
Imputation: Replace with mean, median of remaining values
    + MissingIndicator() = index for imputed value rows in column
--- 

# Building a model
## Model layers (deep)
Dense layers
Activation functions
Dropout layers: randomly deactivate neurons of prev layer (prevents overfitting)
Normalisation layers: to adjust scales (sometimes values are too big or too small to learn)
output layers

--- 

## Optimisers and losses 
Losses: pred_value - actual_value
Optimiser: Algos to reduce losses

--- 

## Learning rate and batch size
learnimg rate: rapidity of updating weights and paramters
batch size: size of batch of data trained at once
batching is done to reduce excessive mem usage
> batching and splitting are different!

---

# Training a model
## Splitting data
Train : Model trains and evaluates on same data (overfitting)
Train + Validation: Model trains on 80% data and validates on 20% data
Train + Validation + Test: Model trains on 60% Train, 20% valid, 20% test. Validation helps learn patterns from unseen data.

--- 

# Predicting output
Random forests: Train different decision trees stochastically with different batches. Take aeverage of all decision tree prediction. 

--- 

# Evaluation
cross-validation error
mean absolute error 

---


