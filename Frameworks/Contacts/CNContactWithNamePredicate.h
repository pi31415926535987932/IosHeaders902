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

@interface CNContactWithNamePredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSString* _name;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(id)sgContactMatchesWithSortOrder:(int)arg1 mutableObjects:(char)arg2 service:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

