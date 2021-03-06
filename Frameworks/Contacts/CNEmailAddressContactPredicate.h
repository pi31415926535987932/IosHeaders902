/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString;

@interface CNEmailAddressContactPredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSString* _emailAddress;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
-(id)sgContactMatchesWithSortOrder:(int)arg1 mutableObjects:(char)arg2 service:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithEmailAddress:(id)arg1 ;
-(NSString *)emailAddress;
@end

