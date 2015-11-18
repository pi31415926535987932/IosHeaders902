/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSString* _identifier;
	CNContact* _internalContact;

}

@property (nonatomic,copy,readonly) CNContact * contact; 
@property (nonatomic,copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,retain) CNContact * internalContact;              //@synthesize internalContact=_internalContact - In the implementation block
+(id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(char)supportsSecureCoding;
-(int)multiValueIdentifier;
-(id)sourceContact;
-(id)labeledValue;
-(void)setInternalContact:(CNContact *)arg1 ;
-(id)labeledValueForContact:(id)arg1 ;
-(CNContact *)internalContact;
-(CNContact *)contact;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)key;
-(NSString *)identifier;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setKey:(NSString *)arg1 ;
@end

