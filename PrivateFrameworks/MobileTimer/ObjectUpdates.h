/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ObjectUpdates : NSObject {

	NSMutableArray* _addedObjects;
	NSMutableArray* _removedObjects;

}

@property (nonatomic,readonly) NSMutableArray * addedObjects;                //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSMutableArray * removedObjects;              //@synthesize removedObjects=_removedObjects - In the implementation block
-(id)init;
-(id)description;
-(NSMutableArray *)addedObjects;
-(NSMutableArray *)removedObjects;
@end

