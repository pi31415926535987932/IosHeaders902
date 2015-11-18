/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject {

	NSObject*<OS_dispatch_queue> _rentalTrackerQueue;
	NSMutableDictionary* _rentals;

}
+(id)sharedInstance;
-(void)removeAllRentalsForDatabaseID:(id)arg1 ;
-(void)_saveRentals;
-(void)removeRentalWithItemID:(unsigned long long)arg1 ;
-(void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2 ;
-(id)init;
-(id)_init;
@end

