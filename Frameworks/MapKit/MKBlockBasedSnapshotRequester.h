/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapSnapshotCreatorRequester.h>

@class NSString;

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester> {

	/*^block*/id handler;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotRequesterWitHandler:(/*^block*/id)arg1 ;
-(void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end
