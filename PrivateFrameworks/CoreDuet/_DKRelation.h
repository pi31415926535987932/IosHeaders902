/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>

@class NSString, _DKObject;

@interface _DKRelation : _DKObject {

	NSString* _verbPhrase;
	_DKObject* _subject;
	_DKObject* _object;

}

@property (readonly) NSString * verbPhrase;              //@synthesize verbPhrase=_verbPhrase - In the implementation block
@property (readonly) _DKObject * subject;                //@synthesize subject=_subject - In the implementation block
@property (readonly) _DKObject * object;                 //@synthesize object=_object - In the implementation block
+(char)supportsSecureCoding;
+(id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
+(id)entityName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(_DKObject *)object;
-(_DKObject *)subject;
-(char)copyToManagedObject:(id)arg1 ;
-(char)copyFromManagedObject:(id)arg1 readMetadata:(char)arg2 ;
-(NSString *)verbPhrase;
-(id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
@end

