//
//  CCFUrlBuilder.h
//  CCF
//
//  Created by 迪远 王 on 15/12/30.
//  Copyright © 2015年 andforce. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UrlBuilder : NSObject

+ (NSURL *) buildMemberURL:(NSString*)userId;

+ (NSURL *) buildFormURL:(int)formId withPage:(int) page;

+ (NSURL *) buildThreadURL: (int) threadId withPage:(int) page;

+ (NSURL *) buildIndexURL;

+ (NSURL *) buildLoginURL;

+ (NSURL *) buildVCodeURL;

+ (NSURL *) buildReplyURL:(int)threadId;

+ (NSURL *) buildFavFormURL;

+ (NSURL *) buildSearchUrl;

+ (NSURL *) buildNewThreadURL:(int)formId;

+ (NSURL *) buildManageFileURL:(int)formId postTime:(NSString *)time postHash:(NSString *)hash;

+ (NSURL *) buildUploadFileURL;

+ (NSURL *) buildPrivateMessageWithType:(int) type andPage:(int) page;

+ (NSURL *) buildShowPrivateMessageURLWithId:(int) messageId;

+ (NSURL *) buildSendPrivateMessageURL;

+ (NSURL *) buildReplyPrivateMessageURLWithReplyedID:(int) pmId;

// 获取security-token用的
+ (NSURL *) buildNewPMUR;

+ (NSURL *) buildMyThreadPostsURLWithUserId:(NSString*)Id;

+ (NSURL *) buildMyThreadWithName:(NSString*)name;

@end
