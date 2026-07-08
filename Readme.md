# Social Media Posts Database (C)


## Objective.
Implement a simple CRUD (create, read, edit and delete) functionality on the given json file.


## Database

The project contains a file named db.json.

This file stores an array of post objects in the following format:
```json
{
  "id": 1,
  "title": "Morning Coffee Vibes",
  "description": "Nothing beats a fresh cup of coffee while watching the sunrise.",
  "image": "https://example.com/image.png",
  "user_id": 12,
  "likes": 128,
  "comments": 19,
  "created_at": "2026-07-07T07:15:00Z"
}
```

Some posts may have:

"image": null

Treat this as an empty string in your program.

## Tasks

### 1. Define the Post structure

Create a structure capable of storing every field present in a post.

### 2. Implement get_all_posts()

Read every post from db.json and return them.

### 3. Implement get_post_by_id(int id)

Search for a post using its id.

If no matching post exists, return an appropriate failure value.

### 4. Implement edit_post(int id, Post post)

Replace the data of the post with the given id.

Return:

0 on success
1 if the post cannot be found or another error occurs

### 5. Implement delete_post_by_id(int id)

Remove the post with the specified id from the database.

Return:

0 on success
1 if the post cannot be found or another error occurs

### 6. Implement create_post(Post post)

Add the post in the database.

Return:

0 on success
1 if the post cant be added


## Rules

1. The program shouldn't crash when something bad happens.
2. Can't use ai in any form.
3. Can use search engines however you like.
4. Can't use any "external" libs that can make your life easier can only use built in c libs for file io.
5. You should know what each and every line of code written in this project does.

## Recommendation

1. Read about json first.
2. Read about file handling in c.
3. Use google as much as you can. don't use geekforgeeks bekar website hai.
