/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSData, PRSImage, NSURL;


@protocol PRSMapsResult <PRSBaseResult>
@property (nonatomic,retain) NSString * templateName; 
@property (nonatomic,retain) NSString * section_header; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSData * maps_data; 
@property (nonatomic,retain) NSString * maps_data_type; 
@property (nonatomic,retain) NSString * maps_result_type; 
@property (nonatomic,retain) PRSImage * icon; 
@property (nonatomic,retain) NSString * card_title; 
@property (nonatomic,retain) NSString * more; 
@property (nonatomic,retain) NSURL * more_url; 
@optional
-(void)setIcon:(id)arg1;
-(PRSImage *)icon;
-(void)setCard_title:(id)arg1;
-(NSString *)more;
-(void)setMore:(id)arg1;
-(NSURL *)more_url;
-(void)setMore_url:(id)arg1;
-(NSString *)card_title;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setSection_header:(id)arg1;
-(void)setMaps_data:(id)arg1;
-(NSString *)maps_data_type;
-(void)setMaps_data_type:(id)arg1;
-(NSString *)maps_result_type;
-(void)setMaps_result_type:(id)arg1;
-(void)setTemplateName:(id)arg1;
-(NSString *)templateName;
-(NSData *)maps_data;
-(NSString *)section_header;

@end

