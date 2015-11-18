/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@interface ABPersonAdditions : NSObject
+(CFArrayRef)copyOptionalNameAffixProperties;
+(CFArrayRef)copyOptionalJobProperties;
+(CFArrayRef)copyOptionalProperties;
+(char)isNameProperty:(int)arg1 ;
+(CFArrayRef)copyNamePropertiesWithCurrentNameFormat;
+(CFArrayRef)copyOptionalNameProperties;
+(CFArrayRef)copyNamePropertiesForEditing:(char)arg1 includeRequiredNameProperties:(char)arg2 people:(id)arg3 ;
+(CFArrayRef)copyDefaultDisplayedProperties;
+(CFArrayRef)newCFArrayByUnwrappingIntegersInArray:(id)arg1 ;
+(id)arrayByWrappingIntegersInCFArray:(CFArrayRef)arg1 ;
+(void)initializeAddressBookProperties;
+(CFArrayRef)copyNamePropertiesForEditing:(char)arg1 includeRequiredNameProperties:(char)arg2 person:(id)arg3 ;
+(CFArrayRef)copyAllProperties;
+(void)cloneNamePropertiesFromPerson:(void*)arg1 toPerson:(void*)arg2 ;
+(CFArrayRef)copyProperties:(CFArrayRef)arg1 excludingProperties:(CFArrayRef)arg2 ;
+(CFArrayRef)copyNamePropertiesForEditing:(char)arg1 person:(id)arg2 ;
+(void)person:(void*)arg1 allowsLabels:(char*)arg2 customLabels:(char*)arg3 forProperty:(int)arg4 ;
@end

