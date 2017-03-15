# settgen

A basic settlement generator project for RPGs. Written in C.

## intro

I've been running D&D games for several years, and I like to give the players a rich world to explore, where the town is more than just a single shopkeeper and bed in between dungeon trips. To that end, I created a settlement generator in Excel a few years back, but gave up on it as I began experimenting more with how my world worked: one struggle was to provide options for me to generate a settlement randomly from scratch and other options to create a settlement gradually, allowing myself to be involved. Furthermore, one crucial issue was not resolved: the settlement only came into existence once the party needed to visit. Before then, there might as well have not been anything on the spot.

settgen is a **big** project to solve those issues and recreate the generator in C. It creates a "blank" settlement to begin with on a particular terrain, then prompts the user to get involved at their leisure as it grows and develops. New *quarters* (essentially neighbourhoods) are constructed, filled with many people and *buildings*. *Heroes* and rare *items* may make their way into the settlement, only to disappear years later. Strange and wonderful *events* take place each year, each one recorded in the *history* of the settlement.

settgen is a **WIP** and will not be complete for many months. I've chosen to keep the repository publicly available in case anyone interested stumbles upon it and wishes to provide comments, insight or constructive criticism.
