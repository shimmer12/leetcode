import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    df = views[views['author_id'] == views['viewer_id']][['author_id']].drop_duplicates()
    return df.rename(columns={'author_id': 'id'}).sort_values('id')
