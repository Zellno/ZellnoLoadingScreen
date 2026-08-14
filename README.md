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

## License

The source code and documentation are licensed under the MIT License.

The Zellno loading-screen artwork, PNG image, EDDS texture and visual
derivatives are not licensed under MIT. All rights to those visual assets
are reserved by Zellno.

## Disclaimer

This is an unofficial community modification for DayZ. It is not affiliated
with, authorized by or endorsed by Bohemia Interactive a.s.
