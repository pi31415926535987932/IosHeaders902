/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObjectRelation.h>

@class EKObject;

@interface EKObjectToOneRelation : EKObjectRelation {

	EKObject* _relatedObject;
	char _weak;

}
-(id)initWithObject:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 weak:(char)arg4 ;
-(id)relatedObject;
-(id)committedValue;
-(void)updatePersistentObject;
-(void)didCommit;
-(void)setRelatedObject:(id)arg1 ;
-(char)isWeak;
-(void)_addRelatedObject:(id)arg1 setInverse:(char)arg2 dirty:(char)arg3 ;
-(void)_removeRelatedObject:(id)arg1 setInverse:(char)arg2 dirty:(char)arg3 ;
-(void)_setRelatedObject:(id)arg1 setInverse:(char)arg2 dirty:(char)arg3 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)_clear;
-(char)validate:(id*)arg1 ;
-(void)rollback;
-(void)_unload;
-(void)refresh;
@end

