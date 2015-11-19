/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject {

	char notifyUsingAssetsdNotificationCenter;
	id delegate;
	float currentMultiplier;
	NSMutableArray* multipliers;
	float currentTotal;
	NSString* mediaPathString;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) float currentMultiplier; 
@property (nonatomic,retain) NSMutableArray * multipliers; 
@property (assign,nonatomic) float currentTotal; 
@property (assign,nonatomic) char notifyUsingAssetsdNotificationCenter; 
@property (nonatomic,retain) NSString * mediaPathString; 
+(id)unarchiveFromDictionary:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)pop;
-(id)initWithDelegate:(id)arg1 ;
-(void)updateProgress:(float)arg1 ;
-(void)setCurrentMediaPath:(id)arg1 ;
-(void)setCurrentMultiplier:(float)arg1 ;
-(void)setMultipliers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)multipliers;
-(float)currentTotal;
-(float)currentMultiplier;
-(void)setCurrentTotal:(float)arg1 ;
-(void)setMediaPathString:(NSString *)arg1 ;
-(float)totalProgress:(float)arg1 ;
-(char)notifyUsingAssetsdNotificationCenter;
-(NSString *)mediaPathString;
-(void)setNotifyUsingAssetsdNotificationCenter:(char)arg1 ;
-(void)push:(float)arg1 ;
-(void)popAndUpdate;
-(id)archiveToDictionary;
@end

