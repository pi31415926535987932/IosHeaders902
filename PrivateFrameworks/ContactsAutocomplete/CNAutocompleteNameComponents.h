/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying> {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _nickname;
	NSString* _nameSuffix;

}

@property (readonly) NSString * firstName;               //@synthesize firstName=_firstName - In the implementation block
@property (readonly) NSString * lastName;                //@synthesize lastName=_lastName - In the implementation block
@property (readonly) NSString * nickname;                //@synthesize nickname=_nickname - In the implementation block
@property (readonly) NSString * nameSuffix;              //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4 ;
+(id)contactKeys;
-(NSString *)firstName;
-(NSString *)lastName;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)nameSuffix;
-(NSString *)nickname;
@end

