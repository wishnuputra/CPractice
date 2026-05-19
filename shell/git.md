## Git Notes

```
git checkout -b <new-branch> [<start-point>]
```
Create a new branch named <new-branch>, start it at <start-point> (defaults to the current commit), and check out the new branch. You can use the --track or --no-track options to set the branch’s upstream tracking information.

This will fail if there’s an error checking out <new-branch>, for example if checking out the <start-point> commit would overwrite your uncommitted changes.
