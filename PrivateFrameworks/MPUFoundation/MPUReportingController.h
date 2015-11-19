/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface MPUReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _childReportingControllers;
	MPUReportingController* _parentReportingController;

}

@property (nonatomic,copy,readonly) NSArray * childReportingControllers; 
@property (assign,nonatomic,__weak) MPUReportingController * parentReportingController; 
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(void)recordReportingEvents:(id)arg1 ;
-(void)setParentReportingController:(MPUReportingController *)arg1 ;
-(MPUReportingController *)parentReportingController;
-(NSArray *)childReportingControllers;
-(void)addChildReportingController:(id)arg1 ;
-(void)removeChildReportingController:(id)arg1 ;
@end

