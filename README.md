# Zellno Loading Screen

A small custom loading-screen modification for DayZ.

## Status

Version `0.1.0`, developed and tested with DayZ 1.29.
Local server and client functional testing completed successfully.

## Features

- Original Zellno artwork.
- Custom background during connection, queue and character loading.
- Preserves native progress bars, hints, status messages and queue text.
- No gameplay changes.
- No framework dependencies.
- One PBO.
- Required by both server and connecting clients.
- Developed on Linux with the official DayZ Tools through Wine.

## Compatibility

The artwork was composed for 16:9, with important elements positioned to
remain usable on 16:10 and ultrawide displays.

Another mod that changes the same login or loading-screen classes may
override this background. Loading Zellno Loading Screen last is recommended.

## Installation

Copy `@ZellnoLoadingScreen` to the server, copy the public key to the server
keys directory and add the mod to the client-visible `-mod` parameter.

Example: `-mod="@OtherMods;@ZellnoLoadingScreen"`

## Building

`build.sh` uses FileBank, DSSignFile and DSCheckSignatures through Wine.

The private signing key is stored outside this repository. Generated PBOs,
signatures, builds and private keys are excluded from Git.

## Artwork and Brand Usage

Server operators and players may download and use the unmodified official
Zellno Loading Screen Workshop item for its intended purpose.

This permission does not allow anyone to extract, copy, reuse, modify,
reupload or redistribute the artwork, PNG image, EDDS texture or visual
derivatives in another mod, package, server brand or publication. It also
does not allow removal or replacement of the Zellno branding, use of the
assets to impersonate Zellno, or presentation of another project or server
as the original or official Zellno DayZ Server.

No rights to the Zellno name, identity or branding are granted. Any use
outside the unmodified official Workshop item requires prior written
permission from Zellno. Source-code permissions remain governed separately
by the MIT License.

For the public release chronology and cryptographic identifiers, see
[PROVENANCE.md](PROVENANCE.md).

## Monetization Permission

Zellno permits the use of Zellno Loading Screen on monetized DayZ servers,
provided that the server operator is registered, approved and listed under
Bohemia Interactive's DayZ Server Monetization program and complies with all
applicable rules.

This permission applies only to the original content provided by Zellno in
Zellno Loading Screen. It does not grant permission to monetize DayZ itself
or any third-party modification or content used alongside this mod.

Server operators are responsible for obtaining any additional permissions
required by the authors of other mods installed on their servers.

- [Official monetization rules](https://www.bohemia.net/monetization)
- [Approved DayZ servers](https://www.bohemia.net/monetization/approved/dayz)

## License

The source code and documentation are licensed under the MIT License.

The Zellno loading-screen artwork, PNG image, EDDS texture and visual
derivatives are not licensed under MIT. All rights to those visual assets
are reserved by Zellno.

## Disclaimer

This is an unofficial community modification for DayZ. It is not affiliated
with, authorized by or endorsed by Bohemia Interactive a.s.
