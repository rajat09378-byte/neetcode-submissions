


CREATE TABLE Customer (
    customer_id INT,
    year INT,
    revenue DOUBLE PRECISION,
    PRIMARY KEY (customer_id, year)
);

INSERT INTO Customer VALUES
(1, 2019, 100),
(1, 2020, 50),
(2, 2020, -30),
(3, 2019, 80),
(3, 2020, 25),
(4, 2020, 0);

SELECT customer_id
FROM customers
WHERE year = 2020
AND revenue > 0;