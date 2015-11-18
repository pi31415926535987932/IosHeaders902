/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString, NSDictionary;

@interface WKInterfaceDevice : NSObject {

	float _screenScale;
	NSString* _preferredContentSizeCategory;
	NSString* _systemVersion;
	NSString* _name;
	NSString* _model;
	NSString* _localizedModel;
	NSString* _systemName;
	CGRect _screenBounds;

}

@property (assign,nonatomic) CGRect screenBounds;                                //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) float screenScale;                                  //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;              //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedImages; 
@property (nonatomic,copy) NSString * systemVersion;                             //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                     //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * localizedModel;                            //@synthesize localizedModel=_localizedModel - In the implementation block
@property (nonatomic,copy) NSString * systemName;                                //@synthesize systemName=_systemName - In the implementation block
+(id)currentDevice;
-(void)setSystemName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)preferredContentSizeCategory;
-(NSString *)systemVersion;
-(NSString *)model;
-(void)setScreenBounds:(CGRect)arg1 ;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(CGRect)screenBounds;
-(float)screenScale;
-(void)setScreenScale:(float)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setLocalizedModel:(NSString *)arg1 ;
-(NSDictionary *)cachedImages;
-(char)addCachedImage:(id)arg1 name:(id)arg2 ;
-(char)addCachedImageWithData:(id)arg1 name:(id)arg2 ;
-(void)removeCachedImageWithName:(id)arg1 ;
-(void)playHaptic:(int)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)removeAllCachedImages;
@end

