#SQl me t f and null bhota h  <> == !=
Select name from Customer where coalesce(referee_id,0)!=2;

#Coalesce detects NULLS and replaces them with 0.
# Then i looks for everything <> 2 and 0s <> 2 so NULLS are also returned.
