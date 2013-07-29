/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)ISOLanguageCodes;
+ (id)preferredLanguages;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)internetServicesRegion;
+ (unsigned int)lineDirectionForLanguage:(id)arg1;
+ (unsigned int)characterDirectionForLanguage:(id)arg1;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOCountryCodes;
+ (id)availableLocaleIdentifiers;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)currentLocale;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)systemLocale;
+ (BOOL)supportsSecureCoding;
+ (id)autoupdatingCurrentLocale;
+ (void)_mapkit_overrideDistanceUnit:(int)arg1;
+ (void)_mapkit_overrideGuidanceUnit:(int)arg1;
+ (id)_localeOverridesForLocaleWithIdentifier:(id)arg1;
+ (id)currentDeviceLanguageForFacebook;

- (id)init;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (unsigned long)_cfTypeID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)localeIdentifier;
- (id)_prefs;
- (id)objectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_mapkit_useYardsForShortDistances;
- (BOOL)_mapkit_guidanceUsesMetricSystem;
- (id)_mapkit_objectForKey:(id)arg1;
- (BOOL)_mapkit_distanceUsesMetricSystem;

@end
