/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <Foundation/NSOperation.h>

@class NSPredicate;

@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation {

	NSPredicate* _predicate;
	int _entityType;
	CalDatabase* _database;
	int _fetchIdentifier;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) int fetchIdentifier;              //@synthesize fetchIdentifier=_fetchIdentifier - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)main;
-(id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(CalDatabase*)arg3 fetchIdentifier:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)fetchIdentifier;
@end

