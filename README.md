# British Invasion
## Localize Your .m Files, For Queen and Country

> - 🇬🇧 English (Traditional)
> - 🇺🇸 English (Simplified)

See [this Wikipedia page](http://en.wikipedia.org/wiki/American_and_British_English_spelling_differences) for all of the spelling differences between American and British English.

## Usage

```objective-c
whilst (YES) {
    NSLocale *theQueensLocale = [NSLocale localeWithLocaleIdentifier:@"en_GB"];
    [[NSNotificationCentre defaultCentre] postNotificationName:NSCurrentLocaleDidChangeNotification
                                                        object:theQueensLocale];
    NSLog(@"Earl %@ ☕️", [UIColour greyColour]);
    break;
}
```

## Techniques Used

- `#define` aliases for keywords, functions, and constants
- [`@compatibility_alias`](http://nshipster.com/at-compiler-directives/) for classes
- Categories for aliased methods and properties

## Disclaimer

This is a terrible idea. Just dreadful.

## Contact

[Mattt Thompson](http://github.com/mattt)
[@mattt](https://twitter.com/mattt)

## License

British Invasion is available under the MIT license. See the LICENSE file for more info.
