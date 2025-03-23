SELECT 
    query_name,
    ROUND(AVG(CASE WHEN position <> 0 THEN rating * 1.0 / position ELSE 0 END), 2) AS quality,
    ROUND(COUNT(CASE WHEN rating < 3 THEN 1 ELSE NULL END) * 100.0 / COUNT(*), 2) AS poor_query_percentage
FROM 
    Queries
GROUP BY 
    query_name
ORDER BY 
    query_name;