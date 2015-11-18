/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIStatusBarItem : NSObject {

	int _idiom;
	int _type;

}

@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) Class viewClass; 
@property (nonatomic,readonly) int priority; 
@property (nonatomic,readonly) int leftOrder; 
@property (nonatomic,readonly) int rightOrder; 
@property (nonatomic,readonly) NSString * indicatorName; 
+(id)itemWithType:(int)arg1 idiom:(int)arg2 ;
+(char)isItemWithTypeExclusive:(int)arg1 ;
+(char)typeIsValid:(int)arg1 ;
+(char)itemType:(int)arg1 idiom:(int)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4 ;
+(char)itemType:(int)arg1 idiom:(int)arg2 appearsInRegion:(int)arg3 ;
-(id)description;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(int)priority;
-(char)appearsOnLeft;
-(char)appearsOnRight;
-(char)appearsInRegion:(int)arg1 ;
-(int)comparePriority:(id)arg1 ;
-(NSString *)indicatorName;
-(int)leftOrder;
-(int)rightOrder;
-(int)centerOrder;
-(Class)viewClass;
-(int)compareLeftOrder:(id)arg1 ;
-(int)compareRightOrder:(id)arg1 ;
-(int)compareCenterOrder:(id)arg1 ;
@end

